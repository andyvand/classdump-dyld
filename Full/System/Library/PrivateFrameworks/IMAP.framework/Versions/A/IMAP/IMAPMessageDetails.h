/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IMAPMessageDetails : NSObject {

	char _isInvalid;
	unsigned _messageFlags;
	unsigned _uid;

}

@property (assign,nonatomic) unsigned messageFlags;              //@synthesize messageFlags=_messageFlags - In the implementation block
@property (assign,nonatomic) unsigned uid;                       //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) char isInvalid;                     //@synthesize isInvalid=_isInvalid - In the implementation block
+(id)newMessageDetailsWithPersistentIDType:(char)arg1 ;
+(id)searchDetails:(id)arg1 forUid:(unsigned)arg2 skippingUid:(unsigned)arg3 ;
-(char)isInvalid;
-(unsigned)messageFlags;
-(void)setMessageFlags:(unsigned)arg1 ;
-(id)init;
-(id)description;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(void)setIsInvalid:(char)arg1 ;
@end

