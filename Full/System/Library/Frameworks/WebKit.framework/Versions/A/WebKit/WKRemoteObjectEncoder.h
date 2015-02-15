/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSCoder.h>

@interface WKRemoteObjectEncoder : NSCoder {

	RefPtr<WebKit::MutableDictionary>* _rootDictionary;
	Array* _objectStream;
	MutableDictionary* _currentDictionary;

}
-(ImmutableDictionary*)rootObjectDictionary;
-(id)init;
-(char)allowsKeyedCoding;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(char)requiresSecureCoding;
@end

