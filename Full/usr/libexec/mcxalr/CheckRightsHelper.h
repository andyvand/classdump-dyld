/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/mcxalr
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <mcxalr/mcxalr-Structs.h>
@interface CheckRightsHelper : NSObject {

	unsigned fUID;
	int fSeqID;
	TCString* fPath;
	unsigned fFlags;
	int fReplySocket;

}
-(void)setUID:(unsigned)arg1 seqID:(int)arg2 path:(const char*)arg3 flags:(unsigned)arg4 replySocket:(int)arg5 ;
-(void)checkRights:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
