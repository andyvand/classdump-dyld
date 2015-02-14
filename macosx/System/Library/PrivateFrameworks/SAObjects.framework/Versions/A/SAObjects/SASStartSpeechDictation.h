/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeech.h>

@class NSData, NSString;

@interface SASStartSpeechDictation : SASStartSpeech

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * applicationName; 
@property (nonatomic,copy) NSString * applicationVersion; 
@property (assign,nonatomic) char censorSpeech; 
@property (nonatomic,copy) NSString * fieldId; 
@property (nonatomic,copy) NSString * fieldLabel; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * keyboardReturnKey; 
@property (nonatomic,copy) NSString * keyboardType; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * postfixText; 
@property (nonatomic,copy) NSString * prefixText; 
@property (nonatomic,copy) NSString * region; 
@property (nonatomic,copy) NSString * selectedText; 
+(id)startSpeechDictation;
+(id)startSpeechDictationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(NSString *)region;
-(NSString *)applicationVersion;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
-(char)censorSpeech;
-(void)setCensorSpeech:(char)arg1 ;
-(NSString *)fieldId;
-(void)setFieldId:(NSString *)arg1 ;
-(NSString *)fieldLabel;
-(void)setFieldLabel:(NSString *)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSString *)keyboardReturnKey;
-(void)setKeyboardReturnKey:(NSString *)arg1 ;
-(NSString *)postfixText;
-(void)setPostfixText:(NSString *)arg1 ;
-(NSString *)prefixText;
-(void)setPrefixText:(NSString *)arg1 ;
-(NSString *)selectedText;
-(void)setSelectedText:(NSString *)arg1 ;
-(NSString *)keyboardType;
-(NSString *)language;
-(void)setRegion:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)applicationName;
-(id)groupIdentifier;
-(void)setKeyboardType:(NSString *)arg1 ;
@end

