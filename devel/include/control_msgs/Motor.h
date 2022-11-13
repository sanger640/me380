// Generated by gencpp from file control_msgs/Motor.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_MOTOR_H
#define CONTROL_MSGS_MESSAGE_MOTOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace control_msgs
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



   typedef int8_t _one_type;
  _one_type one;

   typedef int8_t _two_type;
  _two_type two;

   typedef int8_t _three_type;
  _three_type three;





  typedef boost::shared_ptr< ::control_msgs::Motor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::Motor_<ContainerAllocator> const> ConstPtr;

}; // struct Motor_

typedef ::control_msgs::Motor_<std::allocator<void> > Motor;

typedef boost::shared_ptr< ::control_msgs::Motor > MotorPtr;
typedef boost::shared_ptr< ::control_msgs::Motor const> MotorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::Motor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::Motor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::control_msgs::Motor_<ContainerAllocator1> & lhs, const ::control_msgs::Motor_<ContainerAllocator2> & rhs)
{
  return lhs.one == rhs.one &&
    lhs.two == rhs.two &&
    lhs.three == rhs.three;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::control_msgs::Motor_<ContainerAllocator1> & lhs, const ::control_msgs::Motor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::control_msgs::Motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::Motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::Motor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::Motor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::Motor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::Motor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b15e77c5ab73574013ea543f187f0b91";
  }

  static const char* value(const ::control_msgs::Motor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb15e77c5ab735740ULL;
  static const uint64_t static_value2 = 0x13ea543f187f0b91ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/Motor";
  }

  static const char* value(const ::control_msgs::Motor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::Motor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 one\n"
"int8 two\n"
"int8 three\n"
;
  }

  static const char* value(const ::control_msgs::Motor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::Motor_<ContainerAllocator> >
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
struct Printer< ::control_msgs::Motor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::Motor_<ContainerAllocator>& v)
  {
    s << indent << "one: ";
    Printer<int8_t>::stream(s, indent + "  ", v.one);
    s << indent << "two: ";
    Printer<int8_t>::stream(s, indent + "  ", v.two);
    s << indent << "three: ";
    Printer<int8_t>::stream(s, indent + "  ", v.three);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_MOTOR_H