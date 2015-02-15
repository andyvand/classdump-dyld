/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ISyncSessionCallback <NSObject>
@required
-(oneway void)sessionWasCancelledForClientWithIdentifier:(bycopy id)arg1 reason:(bycopy id)arg2 userInfo:(bycopy id)arg3;
-(oneway void)sessionWasCancelledForClientWithIdentifier:(bycopy id)arg1 reason:(bycopy id)arg2;
-(oneway void)clientWithId:(bycopy id)arg1 canBeginSyncingPlanWithId:(bycopy id)arg2 currentGeneration:(unsigned)arg3 syncModes:(bycopy id)arg4 entities:(bycopy id)arg5 truthPullers:(bycopy id)arg6;
-(oneway void)clientWithIdCanStartPullingChanges:(bycopy id)arg1;

@end

