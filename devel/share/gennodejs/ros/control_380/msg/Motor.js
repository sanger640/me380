// Auto-generated. Do not edit!

// (in-package control_380.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Motor {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.angles = null;
    }
    else {
      if (initObj.hasOwnProperty('angles')) {
        this.angles = initObj.angles
      }
      else {
        this.angles = new Array(6).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Motor
    // Check that the constant length array field [angles] has the right length
    if (obj.angles.length !== 6) {
      throw new Error('Unable to serialize array field angles - length must be 6')
    }
    // Serialize message field [angles]
    bufferOffset = _arraySerializer.float32(obj.angles, buffer, bufferOffset, 6);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Motor
    let len;
    let data = new Motor(null);
    // Deserialize message field [angles]
    data.angles = _arrayDeserializer.float32(buffer, bufferOffset, 6)
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'control_380/Motor';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a67c767aa0a29c85386374a6e2a5a362';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[6] angles
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Motor(null);
    if (msg.angles !== undefined) {
      resolved.angles = msg.angles;
    }
    else {
      resolved.angles = new Array(6).fill(0)
    }

    return resolved;
    }
};

module.exports = Motor;
