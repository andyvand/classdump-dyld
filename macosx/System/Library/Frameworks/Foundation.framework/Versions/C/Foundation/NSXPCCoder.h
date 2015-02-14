/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@protocol NSObject;
@interface NSXPCCoder : NSCoder {

	id<NSObject> _userInfo;
	id _reserved1;

}

@property (retain) id<NSObject> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(void*)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(void*)arg1 forKey:(id)arg2 ;
-(void*)decodeXPCObjectForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<NSObject>)userInfo;
-(void)setUserInfo:(id<NSObject>)arg1 ;
-(char)requiresSecureCoding;
@end

