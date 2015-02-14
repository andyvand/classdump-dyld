/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HIToolbox/NSSecureCoding.h>

@class NSData;

@interface IPMDEventParameter : NSObject <NSSecureCoding> {

	NSData* eventObject;
	unsigned eventType;
	unsigned eventSize;

}
+(char)isPIDNative;
+(id)eventParameterWithData:(const void*)arg1 type:(unsigned)arg2 size:(unsigned)arg3 ;
+(void)initialize;
+(char)supportsSecureCoding;
-(unsigned)eventType;
-(id)initWithData:(const void*)arg1 type:(unsigned)arg2 size:(unsigned)arg3 ;
-(id)dataObject;
-(id)initWithNSData:(id)arg1 type:(unsigned)arg2 size:(unsigned)arg3 ;
-(id)initWithNSValue:(id)arg1 type:(unsigned)arg2 size:(unsigned)arg3 ;
-(id)initWithObject:(id)arg1 type:(unsigned)arg2 size:(unsigned)arg3 ;
-(unsigned)eventSize;
-(const void*)dataPtr;
-(void)addObjectToArray:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(Class)classForKeyedArchiver;
@end

