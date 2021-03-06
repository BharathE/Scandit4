//  Copyright 2016 Scandit AG
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software distributed under the
//  License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
//  express or implied. See the License for the specific language governing permissions and
//  limitations under the License.

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface SBSConstraints : NSObject

@property (nonatomic, strong) NSNumber *leftMargin;
@property (nonatomic, strong) NSNumber *topMargin;
@property (nonatomic, strong) NSNumber *rightMargin;
@property (nonatomic, strong) NSNumber *bottomMargin;
@property (nonatomic, strong) NSNumber *width;
@property (nonatomic, strong) NSNumber *height;

- (instancetype)initWithMargins:(CGRect)margins;

@end
