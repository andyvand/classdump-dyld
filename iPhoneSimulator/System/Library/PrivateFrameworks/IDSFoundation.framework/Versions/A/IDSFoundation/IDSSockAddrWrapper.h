/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/NSCopying.h>

@interface IDSSockAddrWrapper : NSObject <NSCopying> {

	sockaddr_storage _sa;

}

@property (nonatomic,readonly) const sockaddr* sa; 
@property (nonatomic,readonly) const sockaddr_in* sa4; 
@property (nonatomic,readonly) const sockaddr_in6* sa6; 
@property (nonatomic,readonly) unsigned short saPortHostOrder; 
+(id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3 ;
+(id)wrapperWithSockAddr:(const sockaddr*)arg1 ;
+(id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 ;
+(id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const sockaddr*)sa;
-(id)initWithSockAddr:(const sockaddr*)arg1 ;
-(const sockaddr_in*)sa4;
-(const sockaddr_in6*)sa6;
-(char)isEqualToWrapper:(id)arg1 ;
-(unsigned short)saPortHostOrder;
-(char)isEqualToSockAddr:(const sockaddr*)arg1 ;
-(id)ipData;
-(id)ipString;
-(void)copySockAddr:(sockaddr*)arg1 ;
@end

