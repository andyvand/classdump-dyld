/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MCSChange.h>

@protocol MCSAllMessagesOperation;
@class MFMailMessageStore, MCSMessageOperation;

@interface MailAllMessagesChangeSet : MCSChange {

	MFMailMessageStore* _store;
	MCSMessageOperation<MCSAllMessagesOperation>* _operation;

}

@property (nonatomic,readonly) MCSMessageOperation<MCSAllMessagesOperation> * operation;              //@synthesize operation=_operation - In the implementation block
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)localizedChangeDescription;
-(int)localizedChangeDescriptionPriority;
-(BOOL)isRevertible;
-(id)copyChangeSetForFullPath:(id)arg1 ;
-(unsigned)adjustUnreadCount:(unsigned)arg1 withCriterion:(id)arg2 ;
-(id)initWithMessageStore:(id)arg1 operation:(id)arg2 ;
-(id)stores;
-(BOOL)revert;
-(void)dealloc;
-(id)description;
-(id)operation;
-(BOOL)commit;
-(id)URLStrings;
@end
