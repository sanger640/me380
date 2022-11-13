;; Auto-generated. Do not edit!


(when (boundp 'motor_control::Motor)
  (if (not (find-package "MOTOR_CONTROL"))
    (make-package "MOTOR_CONTROL"))
  (shadow 'Motor (find-package "MOTOR_CONTROL")))
(unless (find-package "MOTOR_CONTROL::MOTOR")
  (make-package "MOTOR_CONTROL::MOTOR"))

(in-package "ROS")
;;//! \htmlinclude Motor.msg.html


(defclass motor_control::Motor
  :super ros::object
  :slots (_one _two _three ))

(defmethod motor_control::Motor
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
    ;; uint8 _one
    1
    ;; uint8 _two
    1
    ;; uint8 _three
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _one
       (write-byte _one s)
     ;; uint8 _two
       (write-byte _two s)
     ;; uint8 _three
       (write-byte _three s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _one
     (setq _one (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _two
     (setq _two (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _three
     (setq _three (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get motor_control::Motor :md5sum-) "82f74106ae5bc5945d9be2f5f396c48f")
(setf (get motor_control::Motor :datatype-) "motor_control/Motor")
(setf (get motor_control::Motor :definition-)
      "uint8 one
uint8 two
uint8 three
")



(provide :motor_control/Motor "82f74106ae5bc5945d9be2f5f396c48f")


