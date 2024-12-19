/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to CXX Translator
  File name: Time_.idl
  Source: Time_.hpp
  Cyclone DDS: v0.10.2

*****************************************************************/
#ifndef DDSCXX_UNITREE_IDL_ROS2_TIME__HPP
#define DDSCXX_UNITREE_IDL_ROS2_TIME__HPP

#include <cstdint>

namespace builtin_interfaces
{
namespace msg
{
namespace dds_
{
class Time_
{
private:
 int32_t sec_ = 0;
 uint32_t nanosec_ = 0;

public:
  Time_() = default;

  explicit Time_(
    int32_t sec,
    uint32_t nanosec) :
    sec_(sec),
    nanosec_(nanosec) { }

  int32_t sec() const { return this->sec_; }
  int32_t& sec() { return this->sec_; }
  void sec(int32_t _val_) { this->sec_ = _val_; }
  uint32_t nanosec() const { return this->nanosec_; }
  uint32_t& nanosec() { return this->nanosec_; }
  void nanosec(uint32_t _val_) { this->nanosec_ = _val_; }

  bool operator==(const Time_& _other) const
  {
    (void) _other;
    return sec_ == _other.sec_ &&
      nanosec_ == _other.nanosec_;
  }

  bool operator!=(const Time_& _other) const
  {
    return !(*this == _other);
  }

};

}

}

}

#include "dds/topic/TopicTraits.hpp"
#include "org/eclipse/cyclonedds/topic/datatopic.hpp"

namespace org {
namespace eclipse {
namespace cyclonedds {
namespace topic {

template <> constexpr const char* TopicTraits<::builtin_interfaces::msg::dds_::Time_>::getTypeName()
{
  return "builtin_interfaces::msg::dds_::Time_";
}

template <> constexpr bool TopicTraits<::builtin_interfaces::msg::dds_::Time_>::isKeyless()
{
  return true;
}

#ifdef DDSCXX_HAS_TYPE_DISCOVERY
template<> constexpr unsigned int TopicTraits<::builtin_interfaces::msg::dds_::Time_>::type_map_blob_sz() { return 262; }
template<> constexpr unsigned int TopicTraits<::builtin_interfaces::msg::dds_::Time_>::type_info_blob_sz() { return 100; }
template<> inline const uint8_t * TopicTraits<::builtin_interfaces::msg::dds_::Time_>::type_map_blob() {
  static const uint8_t blob[] = {
 0x4b,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf1,  0x56,  0x7c,  0x5a,  0x93,  0x54,  0x1c,  0x3b, 
 0x10,  0x86,  0xa4,  0xba,  0x46,  0xf9,  0x8d,  0x00,  0x33,  0x00,  0x00,  0x00,  0xf1,  0x51,  0x01,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x23,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x04,  0x74,  0x45,  0x9c,  0xa3,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0xe2,  0x04,  0x64,  0xd5,  0x00, 
 0x8a,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf2,  0xd4,  0x85,  0x4f,  0x13,  0xae,  0xf3,  0x2d, 
 0xfe,  0x21,  0x57,  0xf3,  0xe6,  0x32,  0x0d,  0x00,  0x72,  0x00,  0x00,  0x00,  0xf2,  0x51,  0x01,  0x00, 
 0x2d,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x25,  0x00,  0x00,  0x00,  0x62,  0x75,  0x69,  0x6c, 
 0x74,  0x69,  0x6e,  0x5f,  0x69,  0x6e,  0x74,  0x65,  0x72,  0x66,  0x61,  0x63,  0x65,  0x73,  0x3a,  0x3a, 
 0x6d,  0x73,  0x67,  0x3a,  0x3a,  0x64,  0x64,  0x73,  0x5f,  0x3a,  0x3a,  0x54,  0x69,  0x6d,  0x65,  0x5f, 
 0x00,  0x00,  0x00,  0x00,  0x36,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x12,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x04,  0x00,  0x04,  0x00,  0x00,  0x00,  0x73,  0x65,  0x63,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x16,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0x00, 
 0x08,  0x00,  0x00,  0x00,  0x6e,  0x61,  0x6e,  0x6f,  0x73,  0x65,  0x63,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x22,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf2,  0xd4,  0x85,  0x4f,  0x13,  0xae,  0xf3,  0x2d, 
 0xfe,  0x21,  0x57,  0xf3,  0xe6,  0x32,  0x0d,  0xf1,  0x56,  0x7c,  0x5a,  0x93,  0x54,  0x1c,  0x3b,  0x10, 
 0x86,  0xa4,  0xba,  0x46,  0xf9,  0x8d, };
  return blob;
}
template<> inline const uint8_t * TopicTraits<::builtin_interfaces::msg::dds_::Time_>::type_info_blob() {
  static const uint8_t blob[] = {
 0x60,  0x00,  0x00,  0x00,  0x01,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf1,  0x56,  0x7c,  0x5a,  0x93,  0x54,  0x1c,  0x3b,  0x10,  0x86,  0xa4,  0xba, 
 0x46,  0xf9,  0x8d,  0x00,  0x37,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x02,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf2,  0xd4,  0x85,  0x4f,  0x13,  0xae,  0xf3,  0x2d,  0xfe,  0x21,  0x57,  0xf3, 
 0xe6,  0x32,  0x0d,  0x00,  0x76,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00, };
  return blob;
}
#endif //DDSCXX_HAS_TYPE_DISCOVERY

} //namespace topic
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

namespace dds {
namespace topic {

template <>
struct topic_type_name<::builtin_interfaces::msg::dds_::Time_>
{
    static std::string value()
    {
      return org::eclipse::cyclonedds::topic::TopicTraits<::builtin_interfaces::msg::dds_::Time_>::getTypeName();
    }
};

}
}

REGISTER_TOPIC_TYPE(::builtin_interfaces::msg::dds_::Time_)

namespace org{
namespace eclipse{
namespace cyclonedds{
namespace core{
namespace cdr{

template<>
propvec &get_type_props<::builtin_interfaces::msg::dds_::Time_>();

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool write(T& streamer, const ::builtin_interfaces::msg::dds_::Time_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.sec()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.nanosec()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool write(S& str, const ::builtin_interfaces::msg::dds_::Time_& instance, bool as_key) {
  auto &props = get_type_props<::builtin_interfaces::msg::dds_::Time_>();
  str.set_mode(cdr_stream::stream_mode::write, as_key);
  return write(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool read(T& streamer, ::builtin_interfaces::msg::dds_::Time_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.sec()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.nanosec()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool read(S& str, ::builtin_interfaces::msg::dds_::Time_& instance, bool as_key) {
  auto &props = get_type_props<::builtin_interfaces::msg::dds_::Time_>();
  str.set_mode(cdr_stream::stream_mode::read, as_key);
  return read(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool move(T& streamer, const ::builtin_interfaces::msg::dds_::Time_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.sec()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.nanosec()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool move(S& str, const ::builtin_interfaces::msg::dds_::Time_& instance, bool as_key) {
  auto &props = get_type_props<::builtin_interfaces::msg::dds_::Time_>();
  str.set_mode(cdr_stream::stream_mode::move, as_key);
  return move(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool max(T& streamer, const ::builtin_interfaces::msg::dds_::Time_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.sec()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.nanosec()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool max(S& str, const ::builtin_interfaces::msg::dds_::Time_& instance, bool as_key) {
  auto &props = get_type_props<::builtin_interfaces::msg::dds_::Time_>();
  str.set_mode(cdr_stream::stream_mode::max, as_key);
  return max(str, instance, props.data()); 
}

} //namespace cdr
} //namespace core
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

#endif // DDSCXX_UNITREE_IDL_ROS2_TIME__HPP