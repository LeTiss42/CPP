/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:43:33 by mravera           #+#    #+#             */
/*   Updated: 2023/06/09 13:30:54 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void) {

    Span    span(100000);
    for (int i = 0; i < 6; i++) {
        try {
            span.addNumber(i * i);
            std::cout << (i * i) << std::endl;
        }
        catch (Span::SpanFullException& e) {
            std::cout << e.what() << std::endl;
        }
    }
    try {
        std::cout << "longest span is : " << span.longestSpan() << std::endl;
        std::cout << "shortest span is : " << span.shortestSpan() << std::endl;
    }
    catch (Span::SpanTooSmallException& e) {
        std::cout << e.what() << std::endl;
    }

    std::vector<int> test(10000, 5);
    try {
        span.insertSpan(test.begin(), test.end());
    }
    catch (Span::SpanTooSmallException& e) {
        std::cout << e.what() << std::endl;
    }
    span.dispContent();
    try {
        std::cout << "longest span is : " << span.longestSpan() << std::endl;
        std::cout << "shortest span is : " << span.shortestSpan() << std::endl;
    }
    catch (Span::SpanTooSmallException& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << "THE END" << std::endl;
    std::cout << "subject test below" << std::endl << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
