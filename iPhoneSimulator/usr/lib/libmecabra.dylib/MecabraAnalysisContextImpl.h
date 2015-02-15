/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
@class NSMutableArray, NSString, NSMutableString, NSArray;

@interface MecabraAnalysisContextImpl : NSObject {

	NSMutableArray* _candidateContext;
	NSString* _stringContext;
	NSString* _stringBeforeCaret;
	NSMutableString* _candidateContextString;
	char _rebuildCandidateContextString;

}

@property (nonatomic,retain) NSString * stringBeforeCaret;                          //@synthesize stringBeforeCaret=_stringBeforeCaret - In the implementation block
@property (nonatomic,retain) NSString * stringContext;                              //@synthesize stringContext=_stringContext - In the implementation block
@property (nonatomic,readonly) NSArray * candidateContextForAnalysis; 
@property (nonatomic,readonly) NSString * stringContextForAnalysis; 
@property (nonatomic,retain) NSMutableString * candidateContextString;              //@synthesize candidateContextString=_candidateContextString - In the implementation block
@property (nonatomic,retain) NSMutableArray * candidateContext;                     //@synthesize candidateContext=_candidateContext - In the implementation block
@property (assign,nonatomic) char rebuildCandidateContextString;                    //@synthesize rebuildCandidateContextString=_rebuildCandidateContextString - In the implementation block
-(void)setStringBeforeCaret:(NSString *)arg1 ;
-(void)setStringContext:(NSString *)arg1 ;
-(void)adjustCandidateContext;
-(void)addCandidate:(id)arg1 ;
-(void)revertLastCommittedCandidate;
-(NSString *)stringContextForAnalysis;
-(NSArray *)candidateContextForAnalysis;
-(NSMutableString *)candidateContextString;
-(char)rebuildCandidateContextString;
-(NSMutableArray *)candidateContext;
-(void)setRebuildCandidateContextString:(char)arg1 ;
-(NSString *)stringBeforeCaret;
-(NSString *)stringContext;
-(void)clearContextForAddition;
-(SCD_Struct_Me5)positionInContextWithPartialDocumentStringLength:(unsigned long long)arg1 ;
-(void)setCandidateContext:(NSMutableArray *)arg1 ;
-(void)setCandidateContextString:(NSMutableString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
@end

