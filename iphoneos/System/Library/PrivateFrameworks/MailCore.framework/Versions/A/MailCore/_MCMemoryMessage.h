/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCMessage.h>

@class MCMemoryDataSource;

@interface _MCMemoryMessage : MCMessage {

	MCMemoryDataSource* _dataSource;

}
-(id)initWithStore:(id)arg1 ;
-(id)messageDataIncludingFromSpace:(char)arg1 newDocumentID:(id)arg2 ;
-(id)primitiveDataSource;
-(char)isCompacted;
-(id)init;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
@end

