// Generated by gencpp from file motor_control/Motor.msg
// DO NOT EDIT!


#ifndef MOTOR_CONTROL_MESSAGE_MOTOR_H
#define MOTOR_CONTROL_MESSAGE_MOTOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motor_control
{
template <class ContainerAllocator>
struct Motor_
{
  typedef Motor_<ContainerAllocator> Type;

  Motor_()
    : one(0)
    , two(0)
    , three(0)  {
    }
  Motor_(const ContainerAllocator& _alloc)
    : one(0)
    , two(0)
    , three(0)  {
  (void)_alloc;
    }



   typedef uint8_t _one_type;
  _one_type one;

   typedef uint8_t _two_type;
  _two_type two;

   typedef uint8_t _three_type;
  _three_type three;





  typedef boost::shared_ptr< ::motor_control::Motor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_control::Motor_<ContainerAllocator> const> ConstPtr;

}; // struct Motor_

typedef ::motor_control::Motor_<std::allocator<void> > Motor;

typedef boost::shared_ptr< ::motor_control::Motor > MotorPtr;
typedef boost::shared_ptr< ::motor_control::Motor const> MotorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_control::Motor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_control::Motor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motor_control::Motor_<ContainerAllocator1> & lhs, const ::motor_control::Motor_<ContainerAllocator2> & rhs)
{
  return lhs.one == rhs.one &&
    lhs.two == rhs.two &&
    lhs.three == rhs.three;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motor_control::Motor_<ContainerAllocator1> & lhs, const ::motor_control::Motor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motor_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motor_control::Motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_control::Motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_control::Motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_control::Motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_control::Motor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_control::Motor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_control::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82f74106ae5bc5945d9be2f5f396c48f";
  }

  static const char* value(const ::motor_control::Motor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82f74106ae5bc594ULL;
  static const uint64_t static_value2 = 0x5d9be2f5f396c48fULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_control::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_control/Motor";
  }

  static const char* value(const ::motor_control::Motor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_control::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 one\n"
"uint8 two\n"
"uint8 three\n"
;
  }

  static const char* value(const ::motor_control::Motor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_control::Motor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.one);
      stream.next(m.two);
      stream.next(m.three);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Motor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_control::Motor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_control::Motor_<ContainerAllocator>& v)
  {
    s << indent << "one: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.one);
    s << indent << "two: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.two);
    s << indent << "three: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.three);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_CONTROL_MESSAGE_MOTOR_H