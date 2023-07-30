
PROJECT(app)

add_executable(app app.cpp)

target_link_libraries(${PROJECT_NAME} nlohmann_json)