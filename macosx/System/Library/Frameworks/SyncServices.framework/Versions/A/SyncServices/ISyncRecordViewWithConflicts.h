/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISyncConcreteRecordView.h>

@class NSString;

@interface ISyncRecordViewWithConflicts : ISyncConcreteRecordView {

	NSString* _clientId;

}
-(void)dealloc;
-(id)initWithRecordStore:(id)arg1 entityNames:(id)arg2 clientIdentifier:(id)arg3 ;
-(id)recordGraphNodesWithIdentifiers:(id)arg1 ;
-(id)actualRecordsWithIdentifiers:(id)arg1 ;
-(id)recordByApplyingConflictValuesToRecord:(id)arg1 withRecordId:(id)arg2 ;
@end

