/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class DecisionDetails;

@interface ManagedEvent : NSObject {

	DecisionDetails* _details;
	unsigned long long _id_number;

}

@property (assign,nonatomic) unsigned long long id_number;              //@synthesize id_number=_id_number - In the implementation block
@property (nonatomic,retain) DecisionDetails * details;                 //@synthesize details=_details - In the implementation block
-(id)description;
-(id)details;
-(void)setDetails:(id)arg1 ;
-(id)initWithId:(unsigned long long)arg1 details:(id)arg2 ;
-(void)serializeToXPCObject:(id)arg1 ;
-(unsigned long long)id_number;
-(void)setId_number:(unsigned long long)arg1 ;
-(void).cxx_destruct;
@end
