/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ADMailComposerJSO_Bindings <JSExport>
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) NSArray * toRecipients; 
@optional
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 __JS_EXPORT_AS__setMessageBody:(id)arg3;

@required
-(void)presentComposer;
-(void)setAttachments:(id)arg1;
-(void)setListener:(id)arg1;
-(id)toRecipients;
-(void)setSubject:(id)arg1;
-(id)subject;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
-(id)listener;
-(void)setToRecipients:(id)arg1;
@end
