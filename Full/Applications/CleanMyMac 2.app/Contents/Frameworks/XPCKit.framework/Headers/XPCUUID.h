/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <XPCKit/XPCKit-Structs.h>
@class NSString;

@interface XPCUUID : NSObject {

	CFUUIDRef _uuidRef;

}

@property (nonatomic,readonly) CFUUIDRef uuidRef;              //@synthesize uuidRef=_uuidRef - In the implementation block
@property (nonatomic,readonly) NSString * string; 
+(id)uuidWithXPCObject:(void*)arg1 ;
+(id)uuid;
-(void*)newXPCObject;
-(id)initWithUUIDRef:(CFUUIDRef)arg1 ;
-(CFUUIDRef)uuidRef;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)string;
@end
