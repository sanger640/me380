;; Auto-generated. Do not edit!


(when (boundp 'control_380::Motor)
  (if (not (find-package "CONTROL_380"))
    (make-package "CONTROL_380"))
  (shadow 'Motor (find-package "CONTROL_380")))
(unless (find-package "CONTROL_380::MOTOR")
  (make-package "CONTROL_380::MOTOR"))

(in-package "ROS")
;;//! \htmlinclude Motor.msg.html


(defclass control_380::Motor
  :super ros::object
  :slots (_angles ))

(defmethod control_380::Motor
  (:init
   (&key
    ((:angles __angles) (make-array 5 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _angles __angles)
   self)
  (:angles
   (&optional __angles)
   (if __angles (setq _angles __angles)) _angles)
  (:serialization-length
   ()
   (+
    ;; float32[5] _angles
    (* 4    5)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[5] _angles
     (dotimes (i 5)
       (sys::poke (elt _angles i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[5] _angles
   (dotimes (i (length _angles))
     (setf (elt _angles i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     )
   ;;
   self)
  )

(setf (get control_380::Motor :md5sum-) "da37f2396c41d2822a851fce98ae8df1")
(setf (get control_380::Motor :datatype-) "control_380/Motor")
(setf (get control_380::Motor :definition-)
      "float32[5] angles


")



(provide :control_380/Motor "da37f2396c41d2822a851fce98ae8df1")


