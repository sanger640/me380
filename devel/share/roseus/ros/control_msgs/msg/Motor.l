;; Auto-generated. Do not edit!


(when (boundp 'control_msgs::Motor)
  (if (not (find-package "CONTROL_MSGS"))
    (make-package "CONTROL_MSGS"))
  (shadow 'Motor (find-package "CONTROL_MSGS")))
(unless (find-package "CONTROL_MSGS::MOTOR")
  (make-package "CONTROL_MSGS::MOTOR"))

(in-package "ROS")
;;//! \htmlinclude Motor.msg.html


(defclass control_msgs::Motor
  :super ros::object
  :slots (_one _two _three ))

(defmethod control_msgs::Motor
  (:init
   (&key
    ((:one __one) 0)
    ((:two __two) 0)
    ((:three __three) 0)
    )
   (send-super :init)
   (setq _one (round __one))
   (setq _two (round __two))
   (setq _three (round __three))
   self)
  (:one
   (&optional __one)
   (if __one (setq _one __one)) _one)
  (:two
   (&optional __two)
   (if __two (setq _two __two)) _two)
  (:three
   (&optional __three)
   (if __three (setq _three __three)) _three)
  (:serialization-length
   ()
   (+
    ;; int8 _one
    1
    ;; int8 _two
    1
    ;; int8 _three
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _one
       (write-byte _one s)
     ;; int8 _two
       (write-byte _two s)
     ;; int8 _three
       (write-byte _three s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _one
     (setq _one (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _one 127) (setq _one (- _one 256)))
   ;; int8 _two
     (setq _two (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _two 127) (setq _two (- _two 256)))
   ;; int8 _three
     (setq _three (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _three 127) (setq _three (- _three 256)))
   ;;
   self)
  )

(setf (get control_msgs::Motor :md5sum-) "b15e77c5ab73574013ea543f187f0b91")
(setf (get control_msgs::Motor :datatype-) "control_msgs/Motor")
(setf (get control_msgs::Motor :definition-)
      "int8 one
int8 two
int8 three
")



(provide :control_msgs/Motor "b15e77c5ab73574013ea543f187f0b91")


