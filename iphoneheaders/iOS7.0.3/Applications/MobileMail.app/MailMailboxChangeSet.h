/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MCSChange.h>

@class MCSMailboxOperation;

@interface MailMailboxChangeSet : MCSChange {

	MCSMailboxOperation* _mailboxOperation;

}
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)localizedChangeDescription;
-(int)localizedChangeDescriptionPriority;
-(id)copyChangeSetForFullPath:(id)arg1 ;
-(unsigned)adjustUnreadCount:(unsigned)arg1 withCriterion:(id)arg2 ;
-(id)mailboxToRemove;
-(id)modifiedMailboxName;
-(id)mailboxToMoveOrRename;
-(id)mailboxParentForMove;
-(id)initWithOperation:(id)arg1 ;
-(id)stores;
-(BOOL)revert;
-(void)dealloc;
-(id)description;
-(BOOL)commit;
-(id)accounts;
-(id)URLStrings;
@end
