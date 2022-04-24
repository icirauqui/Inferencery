# Flashlight

The project builds a development environment for Flashlight library in a docker container.
    https://ai.facebook.com/blog/flashlight-fast-and-flexible-machine-learning-in-c-plus-plus/
    https://github.com/flashlight/flashlight?fbclid=IwAR0uTyc4dVsybJ3R9jkzvVq69TAQP9EK_Fdl7_ScrgA0fS1jmV_EcYWjF0M

It includes the required Dockerfile and the devcontainer json file for its use from VSCode.

Docker image can be downloaded from Docker Hub with id "icirauqui/flashlight_dev:v0":
    https://hub.docker.com/r/icirauqui/flashlight_dev

Different examples being tested, each one in its own separate folder:
- init: base Flashligh example for testing library deployment.
- mnist: NN on the MNist dataset.

