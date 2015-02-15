/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Frameworks/CommerceCore.framework/Versions/A/CommerceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface asn1Token : NSObject {

	unsigned char mClass;
	unsigned long long mIdentifier;
	unsigned long long mLength;
	const char* mContent;

}

@property (readonly) unsigned char tokenClass; 
@property (readonly) unsigned long long identifier; 
@property (readonly) unsigned long long length; 
@property (readonly) const char* content; 
+(id)readTokenFromBuffer:(const char*)arg1 ;
+(id)readTokenFromBuffer:(const char*)arg1 opaque:(char)arg2 ;
+(id)readOpaqueTokenFromBuffer:(const char*)arg1 ;
-(id)description;
-(unsigned long long)length;
-(unsigned long long)identifier;
-(const char*)content;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(char)arg5 ;
-(unsigned char)tokenClass;
@end

