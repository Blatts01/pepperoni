# Use the Microsoft dev containers Python image as a base image
FROM mcr.microsoft.com/devcontainers/base:debian

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive

# Install required packages for Yocto
RUN apt-get update && \
    apt-get install -y \
    gawk \
    wget \
    git-core \
    diffstat \
    unzip \
    texinfo \
    build-essential \
    chrpath \
    socat \
    cpio \
    python3 \
    python3-pip \
    python3-pexpect \
    python3-venv \
    xz-utils \
    debianutils \
    iputils-ping \
    python3-git \
    python3-jinja2 \
    libegl1-mesa \
    libsdl1.2-dev \
    file \
    zstd \
    lz4 \
    curl

# Create a workspace directory
RUN mkdir -p /workspace

# Set the VS Code directory as the working directory
WORKDIR /workspace

# Run a command on container startup (optional)
CMD ["bash"]