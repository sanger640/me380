// Auto-generated. Do not edit!

// (in-package motor_control.msg)


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
      this.one = null;
      this.two = null;
      this.three = null;
    }
    else {
      if (initObj.hasOwnProperty('one')) {
        this.one = initObj.one
      }
      else {
        this.one = 0;
      }
      if (initObj.hasOwnProperty('two')) {
        this.two = initObj.two
      }
      else {
        this.two = 0;
      }
      if (initObj.hasOwnProperty('three')) {
        this.three = initObj.three
      }
      else {
        this.three = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Motor
    // Serialize message field [one]
    bufferOffset = _serializer.uint8(obj.one, buffer, bufferOffset);
    // Serialize message field [two]
    bufferOffset = _serializer.uint8(obj.two, buffer, bufferOffset);
    // Serialize message field [three]
    bufferOffset = _serializer.uint8(obj.three, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Motor
    let len;
    let data = new Motor(null);
    // Deserialize message field [one]
    data.one = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [two]
    data.two = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [three]
    data.three = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 3;
  }

  static datatype() {
    // Returns string type for a message object
    return 'motor_control/Motor';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '82f74106ae5bc5945d9be2f5f396c48f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 one
    uint8 two
    uint8 three
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Motor(null);
    if (msg.one !== undefined) {
      resolved.one = msg.one;
    }
    else {
      resolved.one = 0
    }

    if (msg.two !== undefined) {
      resolved.two = msg.two;
    }
    else {
      resolved.two = 0
    }

    if (msg.three !== undefined) {
      resolved.three = msg.three;
    }
    else {
      resolved.three = 0
    }

    return resolved;
    }
};

module.exports = Motor;
