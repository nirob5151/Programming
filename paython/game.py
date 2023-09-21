import pygame
import random

# initialize Pygame
pygame.init()

# set up screen
screen_width = 800
screen_height = 600
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Car Game")

# set up car image
car_image = pygame.image.load("car.png")
car_width = 50
car_height = 100

# set up obstacle image
obstacle_image = pygame.image.load("obstacle.png")
obstacle_width = 50
obstacle_height = 50

# set up font
font = pygame.font.SysFont(None, 30)

# set up colors
white = (255, 255, 255)
black = (0, 0, 0)

# set up game variables
car_x = screen_width // 2 - car_width // 2
car_y = screen_height - car_height - 10
car_speed = 5
obstacle_speed = 5
obstacle_gap = 200
obstacle_timer = 0
obstacles = []
score = 0

# game loop
running = True
while running:
    # handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # move car
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT]:
        car_x -= car_speed
    if keys[pygame.K_RIGHT]:
        car_x += car_speed

    # spawn obstacles
    obstacle_timer += 1
    if obstacle_timer == obstacle_gap:
        obstacle_x = random.randint(0, screen_width - obstacle_width)
        obstacle_y = -obstacle_height
        obstacles.append((obstacle_x, obstacle_y))
        obstacle_timer = 0

    # move obstacles
    for i, obstacle in enumerate(obstacles):
        obstacle_x, obstacle_y = obstacle
        obstacle_y += obstacle_speed
        obstacles[i] = (obstacle_x, obstacle_y)

        # check collision
        if car_x < obstacle_x + obstacle_width and car_x + car_width > obstacle_x \
                and car_y < obstacle_y + obstacle_height and car_y + car_height > obstacle_y:
            running = False

        # remove obstacles that have gone off screen
        if obstacle_y > screen_height:
            obstacles.pop(i)
            score += 1

    # draw everything
    screen.fill(white)
    screen.blit(car_image, (car_x, car_y))
    for obstacle in obstacles:
        screen.blit(obstacle_image, obstacle)
    score_text = font.render(f"Score: {score}", True, black)
    screen.blit(score_text, (10, 10))
    pygame.display.flip()

# end game
pygame.quit()
