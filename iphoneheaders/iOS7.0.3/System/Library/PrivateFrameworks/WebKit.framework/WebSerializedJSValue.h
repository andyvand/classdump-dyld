/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebSerializedJSValuePrivate;

@interface WebSerializedJSValue : NSObject {

	WebSerializedJSValuePrivate* _private;

}
-(void*)internalRepresentation;
-(id)initWithInternalRepresentation:(void*)arg1 ;
-(void)dealloc;
-(id)initWithValue:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
-(OpaqueJSValueRef)deserialize:(OpaqueJSContextRef)arg1 ;
@end
