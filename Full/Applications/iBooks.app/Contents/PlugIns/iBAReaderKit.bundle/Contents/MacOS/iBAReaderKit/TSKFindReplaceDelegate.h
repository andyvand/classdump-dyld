/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSKFindReplaceDelegate <NSObject>
@optional
-(void)willScrollToReference:(id)arg1;
-(char)findReplaceController:(id)arg1 shouldSkipSearchReference:(id)arg2;
-(void)findReplaceController:(id)arg1 didWrapInDirection:(unsigned long long)arg2;
-(void)findReplaceControllerDidFindNoResults:(id)arg1;

@required
-(void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
-(NSRange*)visibleRootIndexRange;

@end

