// Code generated by protoc-gen-go.
// source: handshake.proto
// DO NOT EDIT!

/*
Package Beam_FTL is a generated protocol buffer package.

It is generated from these files:
	handshake.proto

It has these top-level messages:
	Person
	AddressBook
*/
package Beam_FTL

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type Person_PhoneType int32

const (
	Person_MOBILE Person_PhoneType = 0
	Person_HOME   Person_PhoneType = 1
	Person_WORK   Person_PhoneType = 2
)

var Person_PhoneType_name = map[int32]string{
	0: "MOBILE",
	1: "HOME",
	2: "WORK",
}
var Person_PhoneType_value = map[string]int32{
	"MOBILE": 0,
	"HOME":   1,
	"WORK":   2,
}

func (x Person_PhoneType) String() string {
	return proto.EnumName(Person_PhoneType_name, int32(x))
}
func (Person_PhoneType) EnumDescriptor() ([]byte, []int) { return fileDescriptor0, []int{0, 0} }

type Person struct {
	Name   string                `protobuf:"bytes,1,opt,name=name" json:"name,omitempty"`
	Id     int32                 `protobuf:"varint,2,opt,name=id" json:"id,omitempty"`
	Email  string                `protobuf:"bytes,3,opt,name=email" json:"email,omitempty"`
	Phones []*Person_PhoneNumber `protobuf:"bytes,4,rep,name=phones" json:"phones,omitempty"`
}

func (m *Person) Reset()                    { *m = Person{} }
func (m *Person) String() string            { return proto.CompactTextString(m) }
func (*Person) ProtoMessage()               {}
func (*Person) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *Person) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

func (m *Person) GetId() int32 {
	if m != nil {
		return m.Id
	}
	return 0
}

func (m *Person) GetEmail() string {
	if m != nil {
		return m.Email
	}
	return ""
}

func (m *Person) GetPhones() []*Person_PhoneNumber {
	if m != nil {
		return m.Phones
	}
	return nil
}

type Person_PhoneNumber struct {
	Number string           `protobuf:"bytes,1,opt,name=number" json:"number,omitempty"`
	Type   Person_PhoneType `protobuf:"varint,2,opt,name=type,enum=Beam.FTL.Person_PhoneType" json:"type,omitempty"`
}

func (m *Person_PhoneNumber) Reset()                    { *m = Person_PhoneNumber{} }
func (m *Person_PhoneNumber) String() string            { return proto.CompactTextString(m) }
func (*Person_PhoneNumber) ProtoMessage()               {}
func (*Person_PhoneNumber) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0, 0} }

func (m *Person_PhoneNumber) GetNumber() string {
	if m != nil {
		return m.Number
	}
	return ""
}

func (m *Person_PhoneNumber) GetType() Person_PhoneType {
	if m != nil {
		return m.Type
	}
	return Person_MOBILE
}

type AddressBook struct {
	People []*Person `protobuf:"bytes,1,rep,name=people" json:"people,omitempty"`
}

func (m *AddressBook) Reset()                    { *m = AddressBook{} }
func (m *AddressBook) String() string            { return proto.CompactTextString(m) }
func (*AddressBook) ProtoMessage()               {}
func (*AddressBook) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *AddressBook) GetPeople() []*Person {
	if m != nil {
		return m.People
	}
	return nil
}

func init() {
	proto.RegisterType((*Person)(nil), "Beam.FTL.Person")
	proto.RegisterType((*Person_PhoneNumber)(nil), "Beam.FTL.Person.PhoneNumber")
	proto.RegisterType((*AddressBook)(nil), "Beam.FTL.AddressBook")
	proto.RegisterEnum("Beam.FTL.Person_PhoneType", Person_PhoneType_name, Person_PhoneType_value)
}

func init() { proto.RegisterFile("handshake.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 257 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x6c, 0x50, 0x41, 0x4b, 0xf3, 0x40,
	0x14, 0xfc, 0x92, 0xa6, 0x4b, 0xfb, 0x02, 0xfd, 0xc2, 0x43, 0x24, 0x14, 0x0f, 0x21, 0xa7, 0x80,
	0xb0, 0x87, 0x2a, 0x78, 0x36, 0x50, 0x51, 0x6c, 0x4d, 0x59, 0x2a, 0x9e, 0xb7, 0xec, 0x83, 0x84,
	0x36, 0xbb, 0x4b, 0xb6, 0x1e, 0xfa, 0xdf, 0x3d, 0x48, 0xb6, 0x51, 0x44, 0xbc, 0xcd, 0x9b, 0x19,
	0x66, 0x67, 0x07, 0xfe, 0xd7, 0x52, 0x2b, 0x57, 0xcb, 0x3d, 0x71, 0xdb, 0x99, 0xa3, 0xc1, 0x49,
	0x49, 0xb2, 0xe5, 0x0f, 0xdb, 0x55, 0xfe, 0x11, 0x00, 0xdb, 0x50, 0xe7, 0x8c, 0x46, 0x84, 0x48,
	0xcb, 0x96, 0xd2, 0x20, 0x0b, 0x8a, 0xa9, 0xf0, 0x18, 0x67, 0x10, 0x36, 0x2a, 0x0d, 0xb3, 0xa0,
	0x18, 0x8b, 0xb0, 0x51, 0x78, 0x01, 0x63, 0x6a, 0x65, 0x73, 0x48, 0x47, 0xde, 0x74, 0x3e, 0xf0,
	0x16, 0x98, 0xad, 0x8d, 0x26, 0x97, 0x46, 0xd9, 0xa8, 0x88, 0x17, 0x57, 0xfc, 0x2b, 0x9f, 0x9f,
	0xb3, 0xf9, 0xa6, 0x97, 0x5f, 0xde, 0xdb, 0x1d, 0x75, 0x62, 0xf0, 0xce, 0x5f, 0x21, 0xfe, 0x41,
	0xe3, 0x25, 0x30, 0xed, 0xd1, 0x50, 0x60, 0xb8, 0x90, 0x43, 0x74, 0x3c, 0x59, 0xf2, 0x25, 0x66,
	0x8b, 0xf9, 0xdf, 0xd1, 0xdb, 0x93, 0x25, 0xe1, 0x7d, 0xf9, 0x35, 0x4c, 0xbf, 0x29, 0x04, 0x60,
	0xeb, 0xaa, 0x7c, 0x5a, 0x2d, 0x93, 0x7f, 0x38, 0x81, 0xe8, 0xb1, 0x5a, 0x2f, 0x93, 0xa0, 0x47,
	0x6f, 0x95, 0x78, 0x4e, 0xc2, 0xfc, 0x0e, 0xe2, 0x7b, 0xa5, 0x3a, 0x72, 0xae, 0x34, 0x66, 0x8f,
	0x05, 0x30, 0x4b, 0xc6, 0x1e, 0xfa, 0x11, 0xfa, 0x8f, 0x24, 0xbf, 0x5f, 0x13, 0x83, 0xbe, 0x63,
	0x7e, 0xc8, 0x9b, 0xcf, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3e, 0x7a, 0x49, 0x58, 0x5b, 0x01, 0x00,
	0x00,
}