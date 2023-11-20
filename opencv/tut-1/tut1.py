import cv2 #import opencv library
gojo=cv2.imread("gojo2.jpg",1)#read image in color mode
gojo=cv2.resize(gojo,(0,0),fx=0.5,fy=0.5)#resize image by 0.5
gojo=cv2.rotate(gojo,cv2.ROTATE_180)#rotate image by 180 degrees
cv2.imwrite("newgojo.jpg",gojo)#save image as newgojo.jpg

cv2.imshow("strongest",gojo)#show image in a window
cv2.waitKey(0)#wait for key press to close window (0 means wait for infinite time)
cv2.destroyAllWindows()#destroy all windows created by imshow 