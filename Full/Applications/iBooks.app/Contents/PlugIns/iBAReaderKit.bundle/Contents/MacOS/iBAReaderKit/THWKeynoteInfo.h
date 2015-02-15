/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/TSDContainerInfo.h>
#import <iBAReaderKit/THWWidgetInfo.h>

@class THWWidgetAdornmentInfo, THWKeynoteShowInfo, THWAutoplayConfig, NSString, TSDInfoGeometry;

@interface THWKeynoteInfo : TSDContainerInfo <THWWidgetInfo> {

	char _showTransportControls;
	THWWidgetAdornmentInfo* _adornmentInfo;
	THWKeynoteShowInfo* _showInfo;
	THWAutoplayConfig* _autoplayConfig;

}

@property (nonatomic,retain) THWKeynoteShowInfo * showInfo;                                            //@synthesize showInfo=_showInfo - In the implementation block
@property (assign,nonatomic) char showTransportControls;                                               //@synthesize showTransportControls=_showTransportControls - In the implementation block
@property (nonatomic,retain) THWAutoplayConfig * autoplayConfig;                                       //@synthesize autoplayConfig=_autoplayConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) char floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) char anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) char inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) char attachedToBodyText; 
@property (nonatomic,retain) THWWidgetAdornmentInfo * adornmentInfo;                                   //@synthesize adornmentInfo=_adornmentInfo - In the implementation block
-(THWAutoplayConfig *)autoplayConfig;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 showInfo:(id)arg4 adornmentInfo:(id)arg5 showTransportControls:(char)arg6 autoPlayConfig:(id)arg7 ;
-(Class)repClass;
-(id)childInfos;
-(void)setAdornmentInfo:(THWWidgetAdornmentInfo *)arg1 ;
-(void)setShowTransportControls:(char)arg1 ;
-(void)setAutoplayConfig:(THWAutoplayConfig *)arg1 ;
-(char)showTransportControls;
-(THWWidgetAdornmentInfo *)adornmentInfo;
-(void)setShowInfo:(THWKeynoteShowInfo *)arg1 ;
-(THWKeynoteShowInfo *)showInfo;
-(id)childEnumerator;
-(void)dealloc;
-(Class)layoutClass;
@end
