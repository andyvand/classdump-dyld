/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDD, NSMutableArray, NSObject;

@interface CDDAttributeTable : NSObject {

	CDD* _cdd;
	NSMutableArray* _attributeTable;
	NSObject*<OS_dispatch_queue> _attributeTableQueue;

}

@property (nonatomic,readonly) CDD * cdd;                                                     //@synthesize cdd=_cdd - In the implementation block
@property (nonatomic,readonly) NSMutableArray * attributeTable;                               //@synthesize attributeTable=_attributeTable - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> attributeTableQueue;              //@synthesize attributeTableQueue=_attributeTableQueue - In the implementation block
-(id)initWithCDDinstance:(id)arg1 ;
-(CDD *)cdd;
-(void)dumpLight;
-(NSObject*<OS_dispatch_queue>)attributeTableQueue;
-(NSMutableArray *)attributeTable;
-(void)updateMemoryPoolAssignment:(unsigned long long)arg1 clientId:(unsigned long long)arg2 oldPool:(unsigned long long)arg3 newPool:(unsigned long long)arg4 ;
-(void)registerAttributeWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)deleteAttributeWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(unsigned long long)updateAssociatedBudgetsWithCost:(long long)arg1 forAttributeWithIntegerId:(unsigned long long)arg2 value:(id)arg3 clientId:(unsigned long long)arg4 clientVariantBudgetName:(id)arg5 meterToken:(unsigned long long)arg6 risingEdge:(char)arg7 fallingEdge:(char)arg8 dictionary:(id)arg9 ;
-(char)admitAttributeWithIntegerId:(unsigned long long)arg1 clientId:(unsigned long long)arg2 attributeType:(long long)arg3 attributeValues:(id)arg4 admissionCheckType:(long long)arg5 options:(id)arg6 continueOtherChecks:(char*)arg7 flags:(unsigned long long*)arg8 ;
-(void)associateBudget:(unsigned long long)arg1 forAttributeWithIntegerId:(unsigned long long)arg2 clientId:(unsigned long long)arg3 ;
-(void)reportMeteringResult:(long long)arg1 forAttributeWithIntegerId:(unsigned long long)arg2 clientId:(unsigned long long)arg3 clientVariantBudgetName:(id)arg4 ;
-(void)updateBudgetsWithCost:(long long)arg1 forAttributeWithIntegerId:(unsigned long long)arg2 value:(id)arg3 clientId:(unsigned long long)arg4 risingEdge:(char)arg5 fallingEdge:(char)arg6 ;
-(void)setCategory:(int)arg1 forAttributeWithIntegerId:(unsigned long long)arg2 clientId:(unsigned long long)arg3 ;
-(id)getBudgetsForAttributeId:(unsigned long long)arg1 ;
-(void)checkAttributePoolAssignment;
-(void)setAdmissionMask:(unsigned long long)arg1 clientId:(unsigned long long)arg2 bitfield:(unsigned long long)arg3 ;
-(void)resetAdmissionMask:(unsigned long long)arg1 clientId:(unsigned long long)arg2 bitfield:(unsigned long long)arg3 ;
-(unsigned long long)getAdmissionMask:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)setManualType:(unsigned long long)arg1 clientId:(unsigned long long)arg2 type:(BOOL)arg3 ;
-(BOOL)getManualType:(unsigned long long)arg1 clientId:(unsigned long long)arg2 ;
-(void)dumpAll;
@end

