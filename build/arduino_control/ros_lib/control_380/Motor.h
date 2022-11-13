#ifndef _ROS_control_380_Motor_h
#define _ROS_control_380_Motor_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace control_380
{

  class Motor : public ros::Msg
  {
    public:
      typedef float _one_type;
      _one_type one;
      typedef float _two_type;
      _two_type two;
      typedef float _three_type;
      _three_type three;

    Motor():
      one(0),
      two(0),
      three(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_one;
      u_one.real = this->one;
      *(outbuffer + offset + 0) = (u_one.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_one.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_one.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_one.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->one);
      union {
        float real;
        uint32_t base;
      } u_two;
      u_two.real = this->two;
      *(outbuffer + offset + 0) = (u_two.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_two.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_two.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_two.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->two);
      union {
        float real;
        uint32_t base;
      } u_three;
      u_three.real = this->three;
      *(outbuffer + offset + 0) = (u_three.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_three.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_three.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_three.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->three);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_one;
      u_one.base = 0;
      u_one.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_one.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_one.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_one.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->one = u_one.real;
      offset += sizeof(this->one);
      union {
        float real;
        uint32_t base;
      } u_two;
      u_two.base = 0;
      u_two.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_two.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_two.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_two.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->two = u_two.real;
      offset += sizeof(this->two);
      union {
        float real;
        uint32_t base;
      } u_three;
      u_three.base = 0;
      u_three.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_three.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_three.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_three.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->three = u_three.real;
      offset += sizeof(this->three);
     return offset;
    }

    virtual const char * getType() override { return "control_380/Motor"; };
    virtual const char * getMD5() override { return "187406596d058822a65a5c83cf868e7c"; };

  };

}
#endif
