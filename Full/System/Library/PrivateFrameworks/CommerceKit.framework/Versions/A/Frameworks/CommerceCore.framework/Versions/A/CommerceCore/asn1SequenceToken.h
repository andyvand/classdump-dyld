/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Frameworks/CommerceCore.framework/Versions/A/CommerceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceCore/asn1Token.h>

@interface asn1SequenceToken : asn1Token {

	const char* mReadPointer;

}
-(id)nextToken;
-(id)description;
-(void)reset;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(char)arg5 ;
@end

