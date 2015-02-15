/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class THWReviewQuestion;


@protocol THWReviewQuestionLayout <NSObject>
@property (nonatomic,readonly) unsigned long long questionIndex; 
@property (nonatomic,retain,readonly) THWReviewQuestion * question; 
@required
-(THWReviewQuestion *)question;
-(id)initWithQuestion:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3;
-(void)reviewQuestionAnswerUpdated;
-(id)layoutForChoiceIndex:(unsigned long long)arg1;
-(unsigned long long)questionIndex;

@end
