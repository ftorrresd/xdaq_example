## setup

Once per session.

```
cd mypackage
source setup_xdaq.sh
```


## compile

```
cd mypackage
make
```

## run

```
cd mypackage
./start_xdaq.sh
```

this will start a server at port 8069 (for a machine with multiple, might be a good idea to customize the port number).


## webpage

you will need a tunnel to the development machine.

on your machine, prepend the ssh command like this:
```
ssh -L 8069:localhost:8069 USUAL_SSH_COMMAND_TO_THE_DEV_MACHINE
```

them open your browser on: http://localhost:8069/urn:xdaq-application:lid=255
