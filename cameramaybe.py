import cv2

def frame():
    cap = cv2.VideoCapture(0)  # here it throws an error


    while(True):
        ret,frame=cap.read()
        gray= cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
        cv2.imshow('frame',gray)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    cap.release()
    cap.destroyAllWindows()

frame()
