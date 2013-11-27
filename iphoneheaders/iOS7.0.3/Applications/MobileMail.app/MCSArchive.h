/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MCSMessageOperation.h>

@class MCSMessageOperation;

@interface MCSArchive : MCSMessageOperation {

	MCSMessageOperation* _seenOrTransferOperation;
	MCSMessageOperation* _deleteOperation;
	BOOL _isDeleteInPlace;

}
-(id)localizedErrorDescriptionForMessageCount:(unsigned)arg1 ;
-(id)localizedErrorTitleForMessageCount:(unsigned)arg1 ;
-(id)localizedShortOperationDescription;
-(BOOL)willMarkRead;
-(BOOL)willMarkUnread;
-(BOOL)willUnflag;
-(BOOL)willFlag;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(BOOL)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)isRevertibleWithMessages:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
@end
