/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface GKOOBMessage : NSObject {

	unsigned short _type;

}

@property (readonly) unsigned short type;              //@synthesize type=_type - In the implementation block
-(unsigned short)type;
-(id)data;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long)arg2 ;
-(BOOL)_checkType:(unsigned short)arg1 ;
-(BOOL)_checkSize:(unsigned long)arg1 ;
-(id)initWithMessageType:(unsigned short)arg1 ;
@end
