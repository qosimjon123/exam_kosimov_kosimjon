FROM ubuntu:18.04
LABEL maintainer="Kosimov Kosimjon"
ENV TZ=Europe/Moscow  
     
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone  
RUN apt-get update  
RUN apt-get install qt5-default -y  
RUN apt-get install qtbase5-dev -y  
RUN apt-get install qt5-qmake  
RUN apt-get install build-essential -y . 

WORKDIR /root/
RUN mkdir Kosimov
WORKDIR /root/Kosimov/
COPY *.cpp /root/Kosimov/
COPY *.h /root/Kosimov/
COPY *.pro /root/Kosimov/

RUN qmake ProgramToStart.pro
RUN make

ENTRYPOINT ["./ProgramToStart"]