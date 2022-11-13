; Auto-generated. Do not edit!


(cl:in-package motor_control-msg)


;//! \htmlinclude Motor.msg.html

(cl:defclass <Motor> (roslisp-msg-protocol:ros-message)
  ((one
    :reader one
    :initarg :one
    :type cl:fixnum
    :initform 0)
   (two
    :reader two
    :initarg :two
    :type cl:fixnum
    :initform 0)
   (three
    :reader three
    :initarg :three
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Motor (<Motor>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Motor>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Motor)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name motor_control-msg:<Motor> is deprecated: use motor_control-msg:Motor instead.")))

(cl:ensure-generic-function 'one-val :lambda-list '(m))
(cl:defmethod one-val ((m <Motor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader motor_control-msg:one-val is deprecated.  Use motor_control-msg:one instead.")
  (one m))

(cl:ensure-generic-function 'two-val :lambda-list '(m))
(cl:defmethod two-val ((m <Motor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader motor_control-msg:two-val is deprecated.  Use motor_control-msg:two instead.")
  (two m))

(cl:ensure-generic-function 'three-val :lambda-list '(m))
(cl:defmethod three-val ((m <Motor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader motor_control-msg:three-val is deprecated.  Use motor_control-msg:three instead.")
  (three m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Motor>) ostream)
  "Serializes a message object of type '<Motor>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'one)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'two)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'three)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Motor>) istream)
  "Deserializes a message object of type '<Motor>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'one)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'two)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'three)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Motor>)))
  "Returns string type for a message object of type '<Motor>"
  "motor_control/Motor")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Motor)))
  "Returns string type for a message object of type 'Motor"
  "motor_control/Motor")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Motor>)))
  "Returns md5sum for a message object of type '<Motor>"
  "82f74106ae5bc5945d9be2f5f396c48f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Motor)))
  "Returns md5sum for a message object of type 'Motor"
  "82f74106ae5bc5945d9be2f5f396c48f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Motor>)))
  "Returns full string definition for message of type '<Motor>"
  (cl:format cl:nil "uint8 one~%uint8 two~%uint8 three~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Motor)))
  "Returns full string definition for message of type 'Motor"
  (cl:format cl:nil "uint8 one~%uint8 two~%uint8 three~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Motor>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Motor>))
  "Converts a ROS message object to a list"
  (cl:list 'Motor
    (cl:cons ':one (one msg))
    (cl:cons ':two (two msg))
    (cl:cons ':three (three msg))
))
