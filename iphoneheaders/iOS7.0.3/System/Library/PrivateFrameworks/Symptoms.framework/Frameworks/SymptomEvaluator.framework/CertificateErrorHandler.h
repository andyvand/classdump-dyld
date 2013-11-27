/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSMutableDictionary, NSMutableArray;

@interface CertificateErrorHandler : NSObject <SymptomAdditionalProtocol> {

	unsigned _maxAge;
	unsigned _maxCount;
	NSMutableDictionary* _banned;
	NSMutableArray* _store;

}

@property (assign,nonatomic) unsigned maxAge;                 //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned maxCount;               //@synthesize maxCount=_maxCount - In the implementation block
@property (retain) NSMutableDictionary * banned;              //@synthesize banned=_banned - In the implementation block
@property (retain) NSMutableArray * store;                    //@synthesize store=_store - In the implementation block
+(id)sharedInstance;
+(int)configure:(id)arg1 ;
+(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
+(bool)noteSymptom:(id)arg1 ;
-(id)store;
-(void)setMaxCount:(unsigned)arg1 ;
-(void)setStore:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned)maxCount;
-(unsigned)maxAge;
-(void)setMaxAge:(unsigned)arg1 ;
-(int)configure:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
-(bool)noteSymptom:(id)arg1 ;
-(id)banned;
-(void)setBanned:(id)arg1 ;
-(void).cxx_destruct;
@end
