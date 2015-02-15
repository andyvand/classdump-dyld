/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/blued
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <blued/blued-Structs.h>
#import <blued/NSCopying.h>

@class NSData;

@interface ATTUUID : NSObject <NSCopying> {

	NSData* data;

}

@property (copy) NSData * data; 
@property (readonly) NSData * swappedData; 
+(id)UUID16:(unsigned short)arg1 ;
+(id)UUIDWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)UUIDWithLittleEndianBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)UUID128WithString:(id)arg1 ;
+(id)UUID128:(const char*)arg1 ;
+(id)randomUUID;
+(id)UUIDWithData:(id)arg1 ;
-(id)UUID128;
-(NSData *)swappedData;
-(char)isEqualToUUID16:(unsigned short)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setData:(NSData *)arg1 ;
@end
