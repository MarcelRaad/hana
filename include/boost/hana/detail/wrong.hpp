/*!
@file
Defines `boost::hana::detail::wrong`.

@copyright Louis Dionne 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#ifndef BOOST_HANA_DETAIL_WRONG_HPP
#define BOOST_HANA_DETAIL_WRONG_HPP

#include <type_traits>


namespace boost { namespace hana { namespace detail {
    //! @ingroup group-detail
    //! Equivalent to a type-dependent `std::false_type`.
    //!
    //! This is useful for making a static assertion that would otherwise
    //! always fire up dependent on some template parameters.
    //!
    //!
    //! Example
    //! -------
    //! @snippet example/detail/wrong.cpp wrong
    template <typename ...>
    struct wrong : std::false_type { };
}}} // end namespace boost::hana::detail

#endif // !BOOST_HANA_DETAIL_WRONG_HPP
