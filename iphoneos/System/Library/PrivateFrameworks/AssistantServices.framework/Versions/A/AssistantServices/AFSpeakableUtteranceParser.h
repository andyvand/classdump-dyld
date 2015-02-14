/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class NSMutableDictionary;

@interface AFSpeakableUtteranceParser : NSObject {

	NSMutableDictionary* _providers;
	id _functionHandler;

}

@property (assign,nonatomic) char handleTTSCodes; 
@property (assign,nonatomic) char handlesFunctions; 
+(char)_shouldAutomaticallyProvideFunctions;
+(id)parseUserGeneratedMessage:(id)arg1 ;
-(void)setHandlesFunctions:(char)arg1 ;
-(void)registerProvider:(id)arg1 forNamespace:(id)arg2 ;
-(char)handleTTSCodes;
-(char)handlesFunctions;
-(id)parseStringWithFormat:(id)arg1 error:(id*)arg2 ;
-(id)parseStringWithFormat:(id)arg1 includeControlCharacters:(char)arg2 error:(id*)arg3 hadEmpties:(char*)arg4 ;
-(id)_handleOptionalAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF4*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 ;
-(id)_handleProviderAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF4*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 ;
-(id)_handleControlCodeAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF4*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 hadEmpties:(char*)arg5 ;
-(void)setHandleTTSCodes:(char)arg1 ;
-(id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end

