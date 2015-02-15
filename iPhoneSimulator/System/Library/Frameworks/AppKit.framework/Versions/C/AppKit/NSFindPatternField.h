/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSFindPatternField <NSObject>
@property (assign) id<NSFindPatternManager> findPatternManager; 
@required
-(void)setFindPatternPropertyList:(id)arg1;
-(id)findPatternPropertyList;
-(id)plainTextValue;
-(char)hasFindPattern;
-(id)findPatternArray;
-(void)insertNewFindPattern:(id)arg1;
-(id)replacementExpression;
-(id)regularExpression;
-(void)setFindPatternArray:(id)arg1;
-(void)setFindPatternManager:(id)arg1;
-(id)menuForFindPatternAttachment:(id)arg1;
-(char)removeFindPattern:(id)arg1;
-(id<NSFindPatternManager>)findPatternManager;

@end

