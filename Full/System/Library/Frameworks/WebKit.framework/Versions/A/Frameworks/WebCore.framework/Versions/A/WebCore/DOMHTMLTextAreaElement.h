/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property (assign) char autofocus; 
@property (assign) int cols; 
@property (assign) char disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * name; 
@property (assign) char readOnly; 
@property (assign) int rows; 
@property (copy,readonly) NSString * type; 
@property (copy) NSString * defaultValue; 
@property (copy) NSString * value; 
@property (readonly) char willValidate; 
@property (assign) int selectionStart; 
@property (assign) int selectionEnd; 
@property (copy) NSString * accessKey; 
-(void)setReadOnly:(char)arg1 ;
-(void)setDisabled:(char)arg1 ;
-(int)maxLength;
-(void)setMaxLength:(int)arg1 ;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(char)autofocus;
-(void)setAutofocus:(char)arg1 ;
-(char)disabled;
-(DOMHTMLFormElement *)form;
-(char)willValidate;
-(id)validity;
-(id)validationMessage;
-(id)labels;
-(char)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(int)cols;
-(void)setCols:(int)arg1 ;
-(int)rows;
-(void)setRows:(int)arg1 ;
-(id)dirName;
-(void)setDirName:(id)arg1 ;
-(id)placeholder;
-(void)setPlaceholder:(id)arg1 ;
-(char)readOnly;
-(char)required;
-(void)setRequired:(char)arg1 ;
-(int)selectionStart;
-(void)setSelectionStart:(int)arg1 ;
-(int)selectionEnd;
-(void)setSelectionEnd:(int)arg1 ;
-(id)selectionDirection;
-(void)setSelectionDirection:(id)arg1 ;
-(void)select;
-(void)setRangeText:(id)arg1 ;
-(void)setRangeText:(id)arg1 start:(unsigned)arg2 end:(unsigned)arg3 selectionMode:(id)arg4 ;
-(void)setSelectionRange:(int)arg1 end:(int)arg2 ;
-(id)wrap;
-(void)setWrap:(id)arg1 ;
-(unsigned)textLength;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(void)setValue:(NSString *)arg1 ;
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSString *)defaultValue;
-(NSString *)value;
@end

