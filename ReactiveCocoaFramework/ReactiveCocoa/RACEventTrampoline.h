//
//  RACEventTrampoline.h
//  ReactiveCocoa
//
//  Created by Cody Krieger on 5/18/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RACSubject.h"

extern const char *RACEventTrampolinesKey;

@interface RACEventTrampoline : NSObject {
    SEL delegateMethod;
}

+ (RACEventTrampoline *)trampolineForControl:(UIControl *)control controlEvents:(UIControlEvents)controlEvents;
+ (RACEventTrampoline *)trampolineForTextView:(UITextView *)textView delegateMethod:(SEL)method;

- (void)didGetControlEvent:(id)sender;
- (void)didGetDelegateEvent:(SEL)delegateMethod sender:(id)sender;

@property (nonatomic, strong) RACSubject *subject;
@property (nonatomic) SEL delegateMethod;

@end
