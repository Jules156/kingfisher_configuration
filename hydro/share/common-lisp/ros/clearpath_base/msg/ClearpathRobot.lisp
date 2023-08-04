; Auto-generated. Do not edit!


(cl:in-package clearpath_base-msg)


;//! \htmlinclude ClearpathRobot.msg.html

(cl:defclass <ClearpathRobot> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (model
    :reader model
    :initarg :model
    :type cl:string
    :initform "")
   (platform_revision
    :reader platform_revision
    :initarg :platform_revision
    :type cl:integer
    :initform 0)
   (serial
    :reader serial
    :initarg :serial
    :type cl:integer
    :initform 0)
   (horizon_version
    :reader horizon_version
    :initarg :horizon_version
    :type (cl:vector cl:integer)
   :initform (cl:make-array 2 :element-type 'cl:integer :initial-element 0))
   (firmware_version
    :reader firmware_version
    :initarg :firmware_version
    :type (cl:vector cl:integer)
   :initform (cl:make-array 2 :element-type 'cl:integer :initial-element 0))
   (firmware_revision
    :reader firmware_revision
    :initarg :firmware_revision
    :type cl:integer
    :initform 0)
   (write_date
    :reader write_date
    :initarg :write_date
    :type cl:string
    :initform ""))
)

(cl:defclass ClearpathRobot (<ClearpathRobot>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ClearpathRobot>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ClearpathRobot)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name clearpath_base-msg:<ClearpathRobot> is deprecated: use clearpath_base-msg:ClearpathRobot instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <ClearpathRobot>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader clearpath_base-msg:name-val is deprecated.  Use clearpath_base-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'model-val :lambda-list '(m))
(cl:defmethod model-val ((m <ClearpathRobot>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader clearpath_base-msg:model-val is deprecated.  Use clearpath_base-msg:model instead.")
  (model m))

(cl:ensure-generic-function 'platform_revision-val :lambda-list '(m))
(cl:defmethod platform_revision-val ((m <ClearpathRobot>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader clearpath_base-msg:platform_revision-val is deprecated.  Use clearpath_base-msg:platform_revision instead.")
  (platform_revision m))

(cl:ensure-generic-function 'serial-val :lambda-list '(m))
(cl:defmethod serial-val ((m <ClearpathRobot>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader clearpath_base-msg:serial-val is deprecated.  Use clearpath_base-msg:serial instead.")
  (serial m))

(cl:ensure-generic-function 'horizon_version-val :lambda-list '(m))
(cl:defmethod horizon_version-val ((m <ClearpathRobot>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader clearpath_base-msg:horizon_version-val is deprecated.  Use clearpath_base-msg:horizon_version instead.")
  (horizon_version m))

(cl:ensure-generic-function 'firmware_version-val :lambda-list '(m))
(cl:defmethod firmware_version-val ((m <ClearpathRobot>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader clearpath_base-msg:firmware_version-val is deprecated.  Use clearpath_base-msg:firmware_version instead.")
  (firmware_version m))

(cl:ensure-generic-function 'firmware_revision-val :lambda-list '(m))
(cl:defmethod firmware_revision-val ((m <ClearpathRobot>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader clearpath_base-msg:firmware_revision-val is deprecated.  Use clearpath_base-msg:firmware_revision instead.")
  (firmware_revision m))

(cl:ensure-generic-function 'write_date-val :lambda-list '(m))
(cl:defmethod write_date-val ((m <ClearpathRobot>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader clearpath_base-msg:write_date-val is deprecated.  Use clearpath_base-msg:write_date instead.")
  (write_date m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ClearpathRobot>) ostream)
  "Serializes a message object of type '<ClearpathRobot>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'model))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'model))
  (cl:let* ((signed (cl:slot-value msg 'platform_revision)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'serial)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'serial)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'serial)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'serial)) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'horizon_version))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'firmware_version))
  (cl:let* ((signed (cl:slot-value msg 'firmware_revision)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'write_date))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'write_date))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ClearpathRobot>) istream)
  "Deserializes a message object of type '<ClearpathRobot>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'model) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'model) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'platform_revision) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'serial)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'serial)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'serial)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'serial)) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'horizon_version) (cl:make-array 2))
  (cl:let ((vals (cl:slot-value msg 'horizon_version)))
    (cl:dotimes (i 2)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))))
  (cl:setf (cl:slot-value msg 'firmware_version) (cl:make-array 2))
  (cl:let ((vals (cl:slot-value msg 'firmware_version)))
    (cl:dotimes (i 2)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'firmware_revision) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'write_date) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'write_date) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ClearpathRobot>)))
  "Returns string type for a message object of type '<ClearpathRobot>"
  "clearpath_base/ClearpathRobot")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ClearpathRobot)))
  "Returns string type for a message object of type 'ClearpathRobot"
  "clearpath_base/ClearpathRobot")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ClearpathRobot>)))
  "Returns md5sum for a message object of type '<ClearpathRobot>"
  "1bdab2b789676c1b350ab6739da650c7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ClearpathRobot)))
  "Returns md5sum for a message object of type 'ClearpathRobot"
  "1bdab2b789676c1b350ab6739da650c7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ClearpathRobot>)))
  "Returns full string definition for message of type '<ClearpathRobot>"
  (cl:format cl:nil "string name~%string model~%int32 platform_revision~%uint32 serial~%int32[2] horizon_version~%int32[2] firmware_version~%int32 firmware_revision~%string write_date~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ClearpathRobot)))
  "Returns full string definition for message of type 'ClearpathRobot"
  (cl:format cl:nil "string name~%string model~%int32 platform_revision~%uint32 serial~%int32[2] horizon_version~%int32[2] firmware_version~%int32 firmware_revision~%string write_date~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ClearpathRobot>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
     4 (cl:length (cl:slot-value msg 'model))
     4
     4
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'horizon_version) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'firmware_version) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4
     4 (cl:length (cl:slot-value msg 'write_date))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ClearpathRobot>))
  "Converts a ROS message object to a list"
  (cl:list 'ClearpathRobot
    (cl:cons ':name (name msg))
    (cl:cons ':model (model msg))
    (cl:cons ':platform_revision (platform_revision msg))
    (cl:cons ':serial (serial msg))
    (cl:cons ':horizon_version (horizon_version msg))
    (cl:cons ':firmware_version (firmware_version msg))
    (cl:cons ':firmware_revision (firmware_revision msg))
    (cl:cons ':write_date (write_date msg))
))
